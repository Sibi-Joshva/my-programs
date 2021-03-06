from flask import Flask, render_template, request

app = Flask(_name_)


@app.route('/')
@app.route('/register')
def homepage():
    return render_template('register.html')


@app.route("/confirm", methods=['POST', 'GET'])
def register():
    if request.method == 'POST':
        n = request.form.get('name')
        a = request.form.get('age')
        c = request.form.get('city')
        return render_template('confirm.html', name=n, age=a, city=c)


if _name_ == "_main_":
    app.run(debug=True)