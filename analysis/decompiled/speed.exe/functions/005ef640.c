/* speed.exe 005ef640 FUN_005ef640; analysis pseudocode, not buildable source.
 * calls 005ede20 FUN_005ede20
 * calls 005eef00 FUN_005eef00
 * calls 005e9ec0 FUN_005e9ec0
 * calls 00727480 FUN_00727480
 */

void __fastcall FUN_005ef640(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_005eef00(0xb);
  for (iVar1 = FUN_00727480(0,8,0); iVar1 != 0; iVar1 = FUN_00727480(0,8,iVar1)) {
    local_c = *(undefined4 *)(iVar1 + 4);
    local_8 = *(undefined4 *)(iVar1 + 8);
    local_4 = *(undefined4 *)(iVar1 + 0x14);
    iVar2 = FUN_005e9ec0(0xb,&local_c,0,1);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 3;
    }
  }
  if (*(char *)(param_1 + 0x118) != '\0') {
    FUN_005ede20();
  }
  return;
}

