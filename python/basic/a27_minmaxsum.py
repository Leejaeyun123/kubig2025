import random


def main():
    li = [random.randint(0, 100) for _ in range(100)]
    print(li)
    print(min(li))
    print(max(li))
    print(sum(li))
    print(sum(li) / len(li))


if __name__ == "__main__":
    main()
