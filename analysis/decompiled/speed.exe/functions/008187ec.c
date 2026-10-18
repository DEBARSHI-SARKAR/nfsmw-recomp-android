/* speed.exe 008187ec FUN_008187ec; analysis pseudocode, not buildable source.
 */

void FUN_008187ec(undefined4 param_1,ulonglong *param_2,undefined1 (*param_3) [16],int param_4)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = DAT_0090ba70;
  pauVar1 = param_3 + 8;
  do {
    auVar3 = packsswb(*param_3,(undefined1  [16])0x0);
    param_3 = param_3 + 1;
    *param_2 = auVar3._0_8_ ^ uVar2;
    param_2 = (ulonglong *)((int)param_2 + param_4);
  } while (param_3 < pauVar1);
  return;
}

