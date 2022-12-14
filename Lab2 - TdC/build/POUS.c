void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_VAR(data__->OUT1,0,retain)
  __INIT_VAR(data__->OUT2,0,retain)
  __INIT_VAR(data__->OUT3,0,retain)
  __INIT_VAR(data__->OUT4,0,retain)
  __INIT_VAR(data__->DEMORA,__time_to_timespec(1, 15, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->CONTROL,0,retain)
  TP_init__(&data__->TP0,retain);
  TP_init__(&data__->TP1,retain);
  TP_init__(&data__->TP2,retain);
  TP_init__(&data__->TP3,retain);
  TOF_init__(&data__->TOF0,retain);
  TP_init__(&data__->TP4,retain);
  TP_init__(&data__->TP5,retain);
  TP_init__(&data__->TP6,retain);
  TP_init__(&data__->TP7,retain);
  TOF_init__(&data__->TOF1,retain);
  __INIT_VAR(data__->_TMP_NOT32_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_NOT7_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_NOT31_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_NOT24_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND39_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_NOT37_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_NOT17_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND38_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_NOT8_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_NOT15_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_NOT34_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_NOT32_OUT,,!(__GET_VAR(data__->TP0.Q,)));
  __SET_VAR(data__->TP1.,IN,,__GET_VAR(data__->_TMP_NOT32_OUT,));
  __SET_VAR(data__->TP1.,PT,,__GET_VAR(data__->DEMORA,));
  TP_body__(&data__->TP1);
  __SET_VAR(data__->,_TMP_NOT7_OUT,,!(__GET_VAR(data__->TP1.Q,)));
  __SET_VAR(data__->TP2.,IN,,__GET_VAR(data__->_TMP_NOT7_OUT,));
  __SET_VAR(data__->TP2.,PT,,__GET_VAR(data__->DEMORA,));
  TP_body__(&data__->TP2);
  __SET_VAR(data__->,_TMP_NOT31_OUT,,!(__GET_VAR(data__->TP2.Q,)));
  __SET_VAR(data__->TP3.,IN,,__GET_VAR(data__->_TMP_NOT31_OUT,));
  __SET_VAR(data__->TP3.,PT,,__GET_VAR(data__->DEMORA,));
  TP_body__(&data__->TP3);
  __SET_VAR(data__->TOF0.,IN,,__GET_VAR(data__->TP3.Q,));
  __SET_VAR(data__->TOF0.,PT,,__GET_VAR(data__->DEMORA,));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,_TMP_NOT24_OUT,,!(__GET_VAR(data__->TOF0.Q,)));
  __SET_VAR(data__->,_TMP_AND39_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_NOT24_OUT,),
    (BOOL)__GET_VAR(data__->CONTROL,)));
  __SET_VAR(data__->TP0.,IN,,__GET_VAR(data__->_TMP_AND39_OUT,));
  __SET_VAR(data__->TP0.,PT,,__GET_VAR(data__->DEMORA,));
  TP_body__(&data__->TP0);
  __SET_VAR(data__->,_TMP_NOT37_OUT,,!(__GET_VAR(data__->CONTROL,)));
  __SET_VAR(data__->TOF1.,IN,,__GET_VAR(data__->TP7.Q,));
  __SET_VAR(data__->TOF1.,PT,,__GET_VAR(data__->DEMORA,));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,_TMP_NOT17_OUT,,!(__GET_VAR(data__->TOF1.Q,)));
  __SET_VAR(data__->,_TMP_AND38_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_NOT37_OUT,),
    (BOOL)__GET_VAR(data__->_TMP_NOT17_OUT,)));
  __SET_VAR(data__->TP4.,IN,,__GET_VAR(data__->_TMP_AND38_OUT,));
  __SET_VAR(data__->TP4.,PT,,__GET_VAR(data__->DEMORA,));
  TP_body__(&data__->TP4);
  __SET_VAR(data__->,_TMP_NOT8_OUT,,!(__GET_VAR(data__->TP4.Q,)));
  __SET_VAR(data__->TP5.,IN,,__GET_VAR(data__->_TMP_NOT8_OUT,));
  __SET_VAR(data__->TP5.,PT,,__GET_VAR(data__->DEMORA,));
  TP_body__(&data__->TP5);
  __SET_VAR(data__->,_TMP_NOT15_OUT,,!(__GET_VAR(data__->TP5.Q,)));
  __SET_VAR(data__->TP6.,IN,,__GET_VAR(data__->_TMP_NOT15_OUT,));
  __SET_VAR(data__->TP6.,PT,,__GET_VAR(data__->DEMORA,));
  TP_body__(&data__->TP6);
  __SET_VAR(data__->,_TMP_NOT34_OUT,,!(__GET_VAR(data__->TP6.Q,)));
  __SET_VAR(data__->TP7.,IN,,__GET_VAR(data__->_TMP_NOT34_OUT,));
  __SET_VAR(data__->TP7.,PT,,__GET_VAR(data__->DEMORA,));
  TP_body__(&data__->TP7);
  __SET_VAR(data__->,OUT4,,(__GET_VAR(data__->TP0.Q,) || __GET_VAR(data__->TP7.Q,)));
  __SET_VAR(data__->,OUT3,,(__GET_VAR(data__->TP1.Q,) || __GET_VAR(data__->TP6.Q,)));
  __SET_VAR(data__->,OUT2,,(__GET_VAR(data__->TP2.Q,) || __GET_VAR(data__->TP5.Q,)));
  __SET_VAR(data__->,OUT1,,(__GET_VAR(data__->TP3.Q,) || __GET_VAR(data__->TP4.Q,)));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





