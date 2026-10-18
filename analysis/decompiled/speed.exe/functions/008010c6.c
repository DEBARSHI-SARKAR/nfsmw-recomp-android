/* speed.exe 008010c6 FUN_008010c6; analysis pseudocode, not buildable source.
 */

void FUN_008010c6(int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1[3];
  if (iVar1 < -0x10) {
    cVar2 = '\x18';
  }
  else if (iVar1 < -8) {
    cVar2 = '\x10';
  }
  else {
    cVar2 = '\b';
  }
  *param_1 = *param_1 << (cVar2 - ((byte)iVar1 & 7) & 0x1f);
  *(undefined1 *)(param_1[5] + param_1[4]) = *(undefined1 *)((int)param_1 + 3);
  param_1[4] = param_1[4] + 1;
  *(undefined1 *)(param_1[4] + param_1[5]) = *(undefined1 *)((int)param_1 + 2);
  param_1[4] = param_1[4] + 1;
  *(undefined1 *)(param_1[4] + param_1[5]) = *(undefined1 *)((int)param_1 + 1);
  param_1[4] = param_1[4] + 1;
  *(char *)(param_1[4] + param_1[5]) = (char)*param_1;
  param_1[4] = param_1[4] + 1;
  return;
}

