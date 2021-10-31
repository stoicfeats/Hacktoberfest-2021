from instabot import Bot
bot = Bot()

bot.login(username="<your_username>",  # replace <your_username> with your user name
          password="<password>")  # replace <password> with your password

# Recommended to put the photo
# you want to upload in the same
# directory where this Python code
# is located else you will have
# to provide full path for the photo
bot.upload_photo("img.jpeg", caption="there's nothing better than nature")

# for uploading second time you may need to delete new directory which this program will create
