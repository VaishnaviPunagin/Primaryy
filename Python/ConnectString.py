def str():
    print("Enter details : \n")
    server=input("Sever :  ")
    dbname=input("Database name :  ")
    usr=input("User Name :  ")
    pwd=input("Password :  ")
    return "server=%s:dbname=%s:usr=%s:pass=%s"%(server,dbname,usr,pwd)

a=str()
print(a)

