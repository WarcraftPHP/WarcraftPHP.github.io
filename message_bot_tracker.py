import telebot
import os
from dotenv import load_dotenv
load_dotenv()
API_TOKEN=os.getenv('API_KEY')
bot = telebot.TeleBot(API_TOKEN)
@bot.message_handler(func=lambda message: True)
def handle_all_messages(message):
   username = message.from_user.username
   group_name = message.chat.title
   print(f"{group_name if group_name else ""} @{username}: {message.text}")
bot.infinity_polling()