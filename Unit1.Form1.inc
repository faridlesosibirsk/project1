procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(138, 71);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 3;
        self.button1.Text := 'button1';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(292, 273);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.buttonMove);
        self.Controls.Add(self.buttonCar);
        self.Controls.Add(self.buttonRoad);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
    end;
