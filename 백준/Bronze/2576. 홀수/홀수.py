m_list = []
for i in range(7):
    n = int(input())
    if n % 2 != 0:
        m_list.append(n)

if m_list == []:
    print(-1)
else:
    print(sum(m_list))
    print(min(m_list))