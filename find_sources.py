import glob

sources = glob.glob('./sources/*.c') + glob.glob('./sources/**/*.c')
for i in sources:
    print(i)