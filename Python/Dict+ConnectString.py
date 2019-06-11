def str():
    print("Enter details : \n")
    server=input("Sever :  ")
    dbname=input("Database name :  ")
    usr=input("User Name :  ")
    pwd=input("Password :  ")
    d={'Server':server,'Database':dbname,'Usr':usr,'Pwd':pwd}
    return d

d=str()
print(d)

