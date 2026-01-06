for i in range(3):
    s_h,s_m,s_s,e_h,e_m,e_s = map(int,input().split())

    in_ = s_h*3600 + s_m*60 + s_s
    out_ = e_h*3600 + e_m*60 + e_s

    time = out_ - in_

    h = time//3600
    m = (time%3600)//60
    s = (time%3600)%60

    print(h,m,s)