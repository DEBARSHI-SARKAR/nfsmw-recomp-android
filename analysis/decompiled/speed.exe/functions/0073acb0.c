/* speed.exe 0073acb0 FUN_0073acb0; analysis pseudocode, not buildable source.
 */

void FUN_0073acb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  switch(*(undefined4 *)(*param_1 + 0x24)) {
  case 0x530b82b0:
    piVar2 = &DAT_009ae930;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
    return;
  case 0x530b82b1:
    piVar2 = &DAT_009ae980;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
    return;
  case 0x530b82b2:
    piVar2 = &DAT_009ae9d0;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
    return;
  case 0x530b82b3:
    piVar2 = &DAT_009aea20;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
  }
  return;
}

