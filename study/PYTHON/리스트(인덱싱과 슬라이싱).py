# 인덱싱
colors=['red','blue','green']
print(colors[0])
print(colors[2])
print(len(colors)) # len() 함수의 len은 length의 준말로 리스트의 길이(값의 개수)를 반환하는 함수

# 슬라이싱
# 변수명[시작 인덱스:마지막 인덱스]
# 시작 인덱스와 마지막 인덱스 외에도 마지막 자리에 증가값을 넣을 수 있다. ex) 변수명[시작 인덱스:마지막 인덱스:증가값]
cities = ['서울','부산','인천','대구','대전','광주','울산','수원']
print(cities[0:6])      # 파이썬의 리스트에서 마지막 인덱스값은 출력X
print(cities[6:])
print(cities[-8:])      # 리버스 인덱스는 마지막 값부터 -1을 할당
print(cities[-8:-5])
print(cities[:])        # cities 변수의 처음부터 끝까지
print(cities[-50:50])   # 범위를 넘어갈 경우 자동으로 최대 범위를 지정
print(cities[::2])      # 2칸 간격으로 출력
print(cities[::-1])     # 역방향으로 1칸 간격으로 출력