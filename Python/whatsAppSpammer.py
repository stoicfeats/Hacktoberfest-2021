# If you want to annoy your friend this project is just for you 
# send some crappy movie script or birthday wishes just run once and send as many messeges you want


import webbrowser #for opening url in web browser
import pyautogui # for entering and sending messege
import time  # we will neeed some sleep time for accomodate the internet speed delay

msg = "hello world this is spam bot" # put the messege you want to send
url = 'https://wa.me/+91**********' # enter the whatsapp number in place of **********
webbrowser.open(url)  # open the specified url - Windows
time.sleep(10) # sleep for 10 sec for opening whatsapp web and to accomodate the internet speed delay

for i in range(10): #change value for number of messeges
    pyautogui.typewrite(msg) #type the messege in the input field
    time.sleep(2) # change this for delay in each messege
    pyautogui.press("enter") #press enter to send the messege
