def filledOrders(order, k):
    total = k
    fulf = []
    for r in order:
        if r <= total:
            fulf.append(r)
            total -= r
        else:
            break

    if sum(fulf) > k:
        fulf.pop()
        
    return len(fulf)
