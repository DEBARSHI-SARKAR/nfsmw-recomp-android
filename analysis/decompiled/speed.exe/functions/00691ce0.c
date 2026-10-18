/* speed.exe 00691ce0 FUN_00691ce0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00691ce0(int *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  
  fVar1 = (float)param_1[0x4c];
  if (((!NAN(fVar1) && !NAN(_DAT_00890968)) && fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) &&
     (_DAT_008aabe0 < param_2)) {
    cVar2 = (**(code **)(*param_1 + 4))();
    if (cVar2 == '\0') {
      fVar3 = (float10)FUN_006e8de0();
      param_1[0x4c] = (int)(float)(fVar3 + (float10)param_2);
    }
  }
  return;
}

