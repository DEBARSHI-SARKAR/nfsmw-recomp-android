/* speed.exe 0081a330 FUN_0081a330; analysis pseudocode, not buildable source.
 * calls 0081f337 FUN_0081f337
 * calls 0081d582 FUN_0081d582
 */

void FUN_0081a330(int *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined1 local_1c [5];
  undefined1 local_17;
  
  FUN_0081d582(local_1c);
  iVar1 = 0;
  local_17 = 0;
  pbVar2 = (byte *)(param_1 + 7);
  if (*(char *)((int)param_1 + 0xe) != '\0') {
    do {
      (*(code *)(&PTR_LAB_0090bbc0)[*pbVar2])(local_1c,*(undefined4 *)(pbVar2 + 8));
      *(undefined4 *)(pbVar2 + 4) = *(undefined4 *)(pbVar2 + 8);
      pbVar2 = pbVar2 + 0xc;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)((int)param_1 + 0xe));
  }
  FUN_0081f337(*(undefined4 *)(*param_1 + 0x40),*(undefined4 *)(param_2 + 4),local_1c);
  return;
}

