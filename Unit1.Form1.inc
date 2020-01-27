procedure InitializeComponent;
    begin
        self.buttonRoad := new System.Windows.Forms.Button();
        self.buttonCar := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // buttonRoad
        // 
        self.buttonRoad.Location := new System.Drawing.Point(71, 147);
        self.buttonRoad.Name := 'buttonRoad';
        self.buttonRoad.Size := new System.Drawing.Size(75, 23);
        self.buttonRoad.TabIndex := 0;
        self.buttonRoad.Text := 'Road';
        self.buttonRoad.UseVisualStyleBackColor := true;
        self.buttonRoad.Click += buttonRoad_Click;
        // 
        // buttonCar
        // 
        self.buttonCar.Location := new System.Drawing.Point(139, 61);
        self.buttonCar.Name := 'buttonCar';
        self.buttonCar.Size := new System.Drawing.Size(75, 23);
        self.buttonCar.TabIndex := 1;
        self.buttonCar.Text := 'Cars';
        self.buttonCar.UseVisualStyleBackColor := true;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(292, 273);
        self.Controls.Add(self.buttonCar);
        self.Controls.Add(self.buttonRoad);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
    end;
