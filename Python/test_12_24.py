import cv2
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.datasets import fetch_openml
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import classification_report

# 以MNIST手写数字数据集为基础，训练一个手写数字识别模型，运用逻辑回归算法，实现对手写数字的识别。
# 项目基本要求：1. 读取MNIST数据集，将数据集分为训练集和测试集。
# 2. 使用逻辑回归算法，训练一个手写数字识别模型。
# 3. 使用测试集数据，测试模型的准确率。
# 4. 完成对视频的读取、解码、缩放等必要的预处理操作。
# 5. 使用训练好的模型，对视频中的手写数字进行识别。
# 6. 将识别结果标注以红色，28号字体标注在视频中，并保存成新视频文件。
# 7. 完成对识别结果的统计，并计算各类别的精确率、召回率、F1值。


# 读取MNIST数据集
mnist = fetch_openml('mnist_784')
X = mnist.data
y = mnist.target
X = X / 255.0
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)

# 使用逻辑回归算法，训练一个手写数字识别模型
logistic = LogisticRegression(solver='saga')
logistic.fit(X_train, y_train)

# 使用测试集数据，测试模型的准确率
y_pred = logistic.predict(X_test)
print(classification_report(y_test, y_pred))

# 读取视频
cap = cv2.VideoCapture('output_test.avi')
fps = cap.get(cv2.CAP_PROP_FPS)
size = (int(cap.get(cv2.CAP_PROP_FRAME_WIDTH)), int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT)))
fourcc = cv2.VideoWriter_fourcc(*'XVID')
out = cv2.VideoWriter('output_test_12_24.avi', fourcc, fps, size)

while cap.isOpened():
    ret, frame = cap.read()
    if not ret:
        break
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    gray = cv2.resize(gray, (28, 28))
    gray = gray.reshape(1, -1)
    gray = gray / 255.0
    pred = logistic.predict(gray)
    cv2.putText(frame, str(pred[0]), (10, 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 1)
    out.write(frame)

cap.release()
out.release()
cv2.destroyAllWindows()

# 完成对识别结果的统计，并计算各类别的精确率、召回率、F1值。
# 精确率、召回率、F1值
print(classification_report(y_test, y_pred))


