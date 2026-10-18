/* speed.exe 005bde80 FUN_005bde80; analysis pseudocode, not buildable source.
 * calls 005b9d10 FUN_005b9d10
 * calls 005b5840 FUN_005b5840
 */

void __thiscall FUN_005bde80(int param_1,int param_2,int *param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == '\0') {
    FUN_005b5840(param_1,param_2,&param_2);
  }
  else if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
    FUN_005b9d10(param_1,param_2,&param_2);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (*param_3 - param_2);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
  return;
}

