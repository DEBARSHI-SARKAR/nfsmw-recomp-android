/* speed.exe 007781e0 FUN_007781e0; analysis pseudocode, not buildable source.
 * calls 00777d30 FUN_00777d30
 * calls 00777f50 FUN_00777f50
 */

void __thiscall FUN_007781e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_1c = 0;
  cVar1 = FUN_00777f50(param_2,local_c,local_18,&param_2,&local_1c);
  if (cVar1 == '\0') {
    *(undefined2 *)(param_1 + 0x8e) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    return;
  }
  FUN_00777d30(param_2,local_1c,local_c,local_18,param_3);
  return;
}

