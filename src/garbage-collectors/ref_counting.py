import sys
import gc

def main():
    a = "This is a long string"
    print("Reference Count:", sys.getrefcount(a))
    b = a
    print("Reference Count:", sys.getrefcount(a))
    b = None
    print("Reference Count:", sys.getrefcount(a))

    # print(gc.get_referrers(a))

if __name__ == "__main__":
    main()
