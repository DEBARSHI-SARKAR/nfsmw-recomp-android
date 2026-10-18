/* speed.exe 006142f0 FUN_006142f0; analysis pseudocode, not buildable source.
 * calls 00614240 FUN_00614240
 * calls 00608510 FUN_00608510
 * calls 00613880 FUN_00613880
 */

void __fastcall FUN_006142f0(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int in_EAX;
  int iVar2;
  undefined1 *puVar3;
  
  if (param_2[3] == 0) {
    iVar2 = FUN_00608510(param_2[1],param_1);
    if (iVar2 != 0) {
      FUN_00613880(*param_2,"unexpected end of file in %s",param_2[4]);
      return;
    }
  }
  else {
    puVar3 = (undefined1 *)(param_1 + -1 + in_EAX);
    for (; in_EAX != 0; in_EAX = in_EAX + -1) {
      uVar1 = FUN_00614240();
      *puVar3 = uVar1;
      puVar3 = puVar3 + -1;
    }
  }
  return;
}

