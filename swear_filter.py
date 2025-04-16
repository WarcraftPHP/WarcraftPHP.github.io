import telebot
API_TOKEN = 'YOUR_TOKEN'
bot = telebot.TeleBot(API_TOKEN)
bad_words = []
@bot.message_handler(func=lambda message: True)
def handle_all_messages(message):
 if any(bad_word in message.text.lower() for bad_word in bad_words):
   bot.reply_to(message, f"@{message.from_user.username} has said sweared")
   bot.delete_message(message.chat.id, message.message_id)
bot.infinity_polling()