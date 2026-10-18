/* speed.exe 00574bc0 FUN_00574bc0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00574bc0(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_1[0x17] + 4))(param_2);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x38))(param_2);
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    return;
  }
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  return;
}

