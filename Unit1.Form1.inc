procedure InitializeComponent;
    begin
        self.buttonRoad := new System.Windows.Forms.Button();
        self.buttonCar := new System.Windows.Forms.Button();
        self.buttonMove := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // buttonRoad
        // 
        self.buttonRoad.Location := new System.Drawing.Point(12, 25);
        self.buttonRoad.Name := 'buttonRoad';
        self.buttonRoad.Size := new System.Drawing.Size(75, 23);
        self.buttonRoad.TabIndex := 0;
        self.buttonRoad.Text := 'Road';
        self.buttonRoad.UseVisualStyleBackColor := true;
        self.buttonRoad.Click += buttonRoad_Click;
        // 
        // buttonCar
        // 
        self.buttonCar.Location := new System.Drawing.Point(12, 63);
        self.buttonCar.Name := 'buttonCar';
        self.buttonCar.Size := new System.Drawing.Size(75, 23);
        self.buttonCar.TabIndex := 1;
        self.buttonCar.Text := 'Cars';
        self.buttonCar.UseVisualStyleBackColor := true;
        self.buttonCar.Click += buttonCar_Click;
        // 
        // buttonMove
        // 
        self.buttonMove.Location := new System.Drawing.Point(12, 102);
        self.buttonMove.Name := 'buttonMove';
        self.buttonMove.Size := new System.Drawing.Size(75, 23);
        self.buttonMove.TabIndex := 2;
        self.buttonMove.Text := 'move';
        self.buttonMove.UseVisualStyleBackColor := true;
        self.buttonMove.Click += buttonMove_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(292, 273);
        self.Controls.Add(self.buttonMove);
        self.Controls.Add(self.buttonCar);
        self.Controls.Add(self.buttonRoad);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
    end;
