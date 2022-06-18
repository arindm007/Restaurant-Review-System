from pyexpat import model
from django.http import HttpResponse
from django.shortcuts import render
import joblib 



def home(request):
	return render(request,"home.html")

def result(request):
	model = joblib.load('sentiment_Arindam.pkl')
	
	# model = joblib.load(open('sentiment_Arindam.pkl'))
	

	lis = []

	lis.append(request.GET['rv'])

	# print(lis)
	
	ans = model.predict(lis)
	return render(request,"result.html",{'ans':pred(ans)})

def pred(val):
    res = ''
    if val == 1:
        res = 'Positive'
        return res
    else:
     	res = 'Negative'
     	return res