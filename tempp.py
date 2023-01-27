fp=open('log.txt','r')
file_content=fp.read()
split_content=file_content.splitlines()
host_list = []
for i in range(0,len(split_content),2):
     host_list.append(file_content.splitlines()[i].split('- -')[0])
    
unique_host=set(host_list)
fp.close()
output_list=[]
for item in unique_host:
    output_list.append(item+" "+str(host_list.count(item)))
    
save_output=open('output.txt','w')
for item in output_list:
    save_output.write(item+'\n')
save_output.close()
file_output=open('output.txt','r')
print(file_output.read())
file_output.close()