/* speed.exe 00735ef0 FUN_00735ef0; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 0078eba0 FUN_0078eba0
 * calls 0078f8a0 FUN_0078f8a0
 * calls 0078a700 FUN_0078a700
 * calls 007a10b0 thunk_FUN_007a0c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00735ef0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_40c [1036];
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    FUN_0078f8a0();
    FUN_0078a310(*(undefined1 *)(param_1 + 0x68),8);
    uVar3 = *(undefined4 *)(param_1 + 0x9e0);
    uVar2 = FUN_0078a700((float)DAT_00925ae8 * _DAT_00890984);
    FUN_0078a310(uVar2,uVar3);
    cVar1 = FUN_0078eba0();
    if (cVar1 != '\0') {
      thunk_FUN_007a0c20(local_40c);
    }
  }
  return;
}

