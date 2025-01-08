import random


# 复杂度分析
# Two chapter
def tail_recur(n: int, res: int) -> int:
    # 尾递归（跟迭代一样的空间消耗）
    if n == 0:
        return res
    return tail_recur(n - 1, res + n)


def fib(n: int) -> int:
    # 斐波拉契数列
    if n == 1 or n == 2:
        return n - 1
    res = fib(n - 1) + fib(n - 2)
    return res


def for_loop_recur(n: int) -> int:
    """使用迭代模拟递归"""
    stack = []
    res = 0
    # 递：递归调用
    for i in range(n, 0, -1):
        # 入栈 模拟 递
        stack.append(i)
    # 归：返回结果
    while stack:
        # 出栈 模拟 归
        res += stack.pop()
    # res = 1+2+3+....+n
    return res


def bubble_sort(nums: list[int]) -> list[int]:
    """冒泡排序（平方阶）"""
    count = 0

    # 外循环：未排序区域为[0, i]
    for i in range(len(nums) - 1, 0, -1):
        # 内循环：将未排序区域[0, i]中的最大元素交换至该区域最右侧
        for j in range(i):
            if nums[j] > nums[j + 1]:
                temp: int = nums[j]
                nums[j] = nums[j + 1]
                nums[j + 1] = temp
                count += 3

    return nums


# Four chapter
def init_array():
    arr: list[int] = [0] * 5  # {0, 0, 0, 0, 0}
    nums = [1.24, 2.674, 4.56, 246.2]
    print(arr, end='\n')
    print(nums)


def random_access(nums: list[int]) -> int:
    """随机访问元素"""
    # 在区间 [0, len(nums)-1] 中随机抽取一个数字
    random_index = random.randint(0, len(nums) - 1)
    # 获取并返回随机元素
    random_num = nums[random_index]
    return random_num


# list = [23, 25, 235, 2356, 3463]
# print(random_access(list))


def insert_array(nums: list[int], num: int, index: int):
    """在数组的索引 index 处插入元素 num"""
    for i in range(len(nums) - 1, index, -1):
        nums[i] = nums[i - 1]
    nums[index] = num


# list = [1, 2, 3, 4, 5, 6]
# insert_array(list, 11, 2)
# print(list)


def remove_array(nums: list[int], index: int):
    """删除索引 index 处的元素"""
    for i in range(index, len(nums) - 1):
        nums[i] = nums[i + 1]


# list = [1, 2, 3, 4, 5]
# remove_array(list, 2)
# print(list)


def extend_array(nums: list[int], enlarge: int) -> list[int]:
    """扩展数组"""
    # 初始化一个扩展长度后的数组
    res = [0] * (len(nums) + enlarge)
    for i in range(len(nums)):
        res[i] = nums[i]
    return res


# list = [1, 2, 3, 4, 5]
# print(extend_array(list, 5))


class ListNode:
    """ 链表节点 类"""

    def __init__(self, val: int):
        self.val: int = val  # 节点值
        self.next: ListNode | None = None  # 指向下一节点的引用



def insert_linked_list(n0: ListNode, P: ListNode):
    """在链表的节点 n0 之后插入节点 P"""
    n1 = n0.next
    P.next = n1
    return P

def remove_linked_list(n0: ListNode):
    if not n0.next:
        return
    # n0 -> P -> n1
    P = n0.next
    n1 = P.next
    n0.next = n1

def access_linked_list(head: ListNode, index: int) -> ListNode | None:
    """访问链表中索引为 index 的结点"""
    for i in range(index):
        if not head:
            return None
        head = head.next
    
    return head

def find_linked_list(head: ListNode, target: int) -> int:
    """在链表中查找值为 target 的首个节点"""
    index = 0
    while head:
        if head.val == target:
            return index
        head = head.next
        index += 1
    return -1

