/* speed.exe 00599740 FUN_00599740; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 0040e040 FUN_0040e040
 * calls 007c4b80 FUN_007c4b80
 * calls 006547a0 FUN_006547a0
 * calls 00401dc0 FUN_00401dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00599740(undefined4 param_1,int param_2,int *param_3,int *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  if ((param_5 != '\0') && ((float)param_4 < (float)param_3)) {
    param_3 = param_4;
  }
  if (param_2 == 0x33fa23a) {
    FUN_007c4b80();
    FUN_006547a0(local_10,4);
    FUN_007c4b80();
    FUN_006547a0(local_20,4);
    if (param_5 != '\0') {
      FUN_004647c0(param_1,"%s/%s",local_10,local_20);
      return;
    }
    FUN_004647c0();
    return;
  }
  if (param_2 != 0x5392e4fd) {
    if (param_5 != '\0') {
      FUN_004647c0(param_1,"%$0.0f/%$0.0f",(double)(float)param_3,(double)(float)param_4);
      return;
    }
    FUN_004647c0(param_1,"%$0.0f",(double)(float)param_4);
    return;
  }
  if ((((float)param_3 == _DAT_00890968) && (DAT_0092d884 != 0)) &&
     ((int *)*DAT_0092d87c != (int *)0x0)) {
    iVar2 = (**(code **)(*(int *)*DAT_0092d87c + 4))();
    if (iVar2 != 0) {
      cVar1 = FUN_0040e040();
      if (cVar1 != '\0') {
        piVar3 = (int *)(**(code **)(*param_3 + 0xac))();
        if (piVar3 != (int *)0x0) {
          piVar3 = (int *)(**(code **)(*piVar3 + 0xa0))();
          if (piVar3 != (int *)0x0) {
            fVar4 = (float10)(**(code **)(*piVar3 + 0x18))();
            FUN_00401dc0(0,(float)((float10)(float)param_4 - fVar4));
          }
        }
      }
    }
  }
  FUN_007c4b80();
  FUN_006547a0(local_10,4);
  FUN_007c4b80();
  FUN_006547a0(local_20,4);
  if (param_5 != '\0') {
    FUN_004647c0(param_1,"%s/%s",local_10,local_20);
    return;
  }
  FUN_004647c0();
  return;
}

