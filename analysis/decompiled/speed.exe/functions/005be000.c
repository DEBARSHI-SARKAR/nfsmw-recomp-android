/* speed.exe 005be000 FUN_005be000; analysis pseudocode, not buildable source.
 * calls 005b9d10 FUN_005b9d10
 * calls 005b5840 FUN_005b5840
 */

void __thiscall FUN_005be000(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == '\0') {
    FUN_005b5840(param_1,param_2,&local_10);
  }
  else if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
    FUN_005b9d10(param_1,param_2,&local_10);
  }
  iVar2 = param_3[2];
  iVar3 = *param_3;
  iVar4 = param_3[3];
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (param_3[1] - local_c);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (iVar2 - local_8);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (iVar3 - local_10);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (iVar4 - local_4);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
  return;
}

