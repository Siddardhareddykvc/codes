import pandas as pd
import numpy as np
import warnings
warnings.filterwarnings("ignore")

data = {  'Rollnumber':['1','2','3','4','5','6','7','8','9','10'],
          'Name':['a','b','c','d','e','f','g','h','i','j'],
          'Gender':["m",'f','m','f','m','f','m','f','m','f'],
          'Marks1':[10,20,30,40,50,60,70,80,90,10],
          'Marks2':[20,40,60,80,90,80,40,60,20,10],
          'Marks3':[50,30,30,40,60,70,80,90,10,50]
        }
          
df = pd.DataFrame(data)
print(df)
col_list=list(df)
df['Total_Marks']=df[col_list].sum(axis=1)
print(df)
min_m1=df['Marks1'].min()
print("minimum marks",min_m1)
max_m2=df['Marks2'].max()
print("maximum marks",max_m2)
avg_m3=df['Marks3'].mean()
print("average",avg_m3)
df['Average']=df[col_list].mean(axis=1)
greatest_avg=df['Average'].max()
print("highest average",greatest_avg)
student_greatest_avg=df.loc[df['Average']==greatest_avg,'Name'].tolist()
print("student got highest average",student_greatest_avg)
fail=df.loc[df['Marks2']<40]
fail['Name'].count()
print("failed_students",fail)




