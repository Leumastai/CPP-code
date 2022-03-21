import pandas as pd
from bs4 import BeautifulSoup
import requests
import ssl
import urllib.request

url = "https://odsc.com/boston/east-2021-prereqs/"
page = requests.get(url)

soup = BeautifulSoup(page.text, "lxml")
page.text

table = soup.find("table", class_="waffle")
table