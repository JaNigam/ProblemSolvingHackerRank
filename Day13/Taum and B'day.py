def taumBday(b, w, bc, wc, z):
    t1 = b*bc + w*wc
    t2 = b*(wc+z) + w*wc
    t3 = b*bc + w*(bc+z)
    
    return min(min(t1, t2), t3)