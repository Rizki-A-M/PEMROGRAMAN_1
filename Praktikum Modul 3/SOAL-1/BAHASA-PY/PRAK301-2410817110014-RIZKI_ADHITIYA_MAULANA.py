A, B, C = map(int, input().split())

if A >= B and A >= C :
    if B >= C :
        print(f"{C} {B} {A}")
    else:
        print(f"{B} {C} {A}")

elif B >= A and B >= C :
    if A >= C :
        print(f"{C} {A} {B}")
    else:
        print(f"{A} {C} {B}")

elif C >= A and C >= B :
    if A >= B :
        print(f"{B} {A} {C}")
    else:
        print(f"{A} {B} {C}")