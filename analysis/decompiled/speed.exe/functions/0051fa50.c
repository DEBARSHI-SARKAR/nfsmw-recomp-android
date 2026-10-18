/* speed.exe 0051fa50 FUN_0051fa50; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0051fa50(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x154) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(param_1 + 0x154) + -4);
  }
  while( true ) {
    if (param_1 == -0x154) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(param_1 + 0x150);
    }
    if (piVar2 == piVar1) break;
    if (piVar2[0xb] == param_2) {
      if (param_3 == '\0') {
        *(undefined1 *)(piVar2 + 0xd) = 1;
        (**(code **)(*piVar2 + 0x14))();
      }
      else {
        *(undefined1 *)(piVar2 + 0xd) = 0;
        (**(code **)(*piVar2 + 0x10))();
      }
    }
    if (piVar2[1] == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(piVar2[1] + -4);
    }
  }
  return;
}

