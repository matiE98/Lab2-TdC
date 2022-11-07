PROGRAM program0
  VAR
    Out1 AT %QX0.0 : BOOL := 0;
    Out2 AT %QX0.1 : BOOL := 0;
    Out3 AT %QX0.2 : BOOL := 0;
    Out4 AT %QX0.3 : BOOL := 0;
  END_VAR
  VAR
    demora : TIME := T#15ms;
    control : BOOL := 0;
    TP0 : TP;
    TP1 : TP;
    TP2 : TP;
    TP3 : TP;
    TOF0 : TOF;
    TP4 : TP;
    TP5 : TP;
    TP6 : TP;
    TP7 : TP;
    TOF1 : TOF;
    _TMP_NOT32_OUT : BOOL;
    _TMP_NOT7_OUT : BOOL;
    _TMP_NOT31_OUT : BOOL;
    _TMP_NOT24_OUT : BOOL;
    _TMP_AND39_OUT : BOOL;
    _TMP_NOT37_OUT : BOOL;
    _TMP_NOT17_OUT : BOOL;
    _TMP_AND38_OUT : BOOL;
    _TMP_NOT8_OUT : BOOL;
    _TMP_NOT15_OUT : BOOL;
    _TMP_NOT34_OUT : BOOL;
  END_VAR

  _TMP_NOT32_OUT := NOT(TP0.Q);
  TP1(IN := _TMP_NOT32_OUT, PT := demora);
  _TMP_NOT7_OUT := NOT(TP1.Q);
  TP2(IN := _TMP_NOT7_OUT, PT := demora);
  _TMP_NOT31_OUT := NOT(TP2.Q);
  TP3(IN := _TMP_NOT31_OUT, PT := demora);
  TOF0(IN := TP3.Q, PT := demora);
  _TMP_NOT24_OUT := NOT(TOF0.Q);
  _TMP_AND39_OUT := AND(_TMP_NOT24_OUT, control);
  TP0(IN := _TMP_AND39_OUT, PT := demora);
  _TMP_NOT37_OUT := NOT(control);
  TOF1(IN := TP7.Q, PT := demora);
  _TMP_NOT17_OUT := NOT(TOF1.Q);
  _TMP_AND38_OUT := AND(_TMP_NOT37_OUT, _TMP_NOT17_OUT);
  TP4(IN := _TMP_AND38_OUT, PT := demora);
  _TMP_NOT8_OUT := NOT(TP4.Q);
  TP5(IN := _TMP_NOT8_OUT, PT := demora);
  _TMP_NOT15_OUT := NOT(TP5.Q);
  TP6(IN := _TMP_NOT15_OUT, PT := demora);
  _TMP_NOT34_OUT := NOT(TP6.Q);
  TP7(IN := _TMP_NOT34_OUT, PT := demora);
  Out4 := TP0.Q OR TP7.Q;
  Out3 := TP1.Q OR TP6.Q;
  Out2 := TP2.Q OR TP5.Q;
  Out1 := TP3.Q OR TP4.Q;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
