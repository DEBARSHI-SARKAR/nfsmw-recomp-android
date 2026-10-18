/* speed.exe 0081801f FUN_0081801f; analysis pseudocode, not buildable source.
 */

void FUN_0081801f(undefined4 param_1,ulonglong *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = DAT_0090b750;
  puVar1 = param_3 + 0x10;
  do {
    uVar3 = packsswb(*param_3,param_3[1]);
    param_3 = param_3 + 2;
    *param_2 = uVar3 ^ uVar2;
    param_2 = (ulonglong *)((int)param_2 + param_4);
  } while (param_3 < puVar1);
  return;
}

