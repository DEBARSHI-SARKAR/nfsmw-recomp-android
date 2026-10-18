/* speed.exe 00846d00 FUN_00846d00; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00846d00(undefined4 param_1,int param_2)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x10) != param_2) {
    *(int *)(in_EAX + 0x10) = param_2;
    if ((*(code **)(in_EAX + 0x8e8) != (code *)0x0) && (param_2 != 7)) {
      (**(code **)(in_EAX + 0x8e8))();
    }
  }
  return;
}

