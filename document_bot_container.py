import telebot
API_TOKEN = 'TOKEN'
bot = telebot.TeleBot(API_TOKEN)
@bot.message_handler(content_types=['document'])
def handle_photo(message):
    user = message.from_user
    grouptitle = message.chat.title or ""
    username = user.username or ""
    doc = message.document
    file_info = bot.get_file(doc.file_id)
    downloaded_file = bot.download_file(file_info.file_path)
    file_path = "YOUR_PATH" + doc.file_name
    print(message.photo)
    with open(file_path, 'wb') as f:
        f.write(downloaded_file)
        print(f"'{grouptitle}' from @{username} has been saved")
        print(f"FileSize: {len(downloaded_file)/(1024**2):.2f} megabytes")
bot.polling()