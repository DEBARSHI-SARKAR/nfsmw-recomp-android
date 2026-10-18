/* speed.exe 0078c2b0 FUN_0078c2b0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0085ce00 FUN_0085ce00
 * calls 00460d20 FUN_00460d20
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056e340 FUN_0056e340
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

int * __thiscall FUN_0078c2b0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *local_4;
  
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  piVar1 = (int *)FUN_0085ce00(*param_1);
  iVar4 = 0;
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
    return (int *)0x0;
  }
  local_4 = (int *)0x0;
  if (param_2 == 0) {
    param_2 = FUN_0056e340();
  }
  if (0 < *piVar1) {
    piVar3 = piVar1 + 0x14;
    do {
      iVar2 = FUN_00460d20(piVar3,param_2);
      if (iVar2 == 0) {
        local_4 = piVar1 + iVar4 * 0x2c + 2;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x2c;
    } while (iVar4 < *piVar1);
  }
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return local_4;
}

