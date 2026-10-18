/* speed.exe 0075b220 FUN_0075b220; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 007594a0 FUN_007594a0
 * calls 007596e0 FUN_007596e0
 */

void FUN_0075b220(void)

{
  int iVar1;
  
  FUN_007594a0();
  iVar1 = FUN_0045da30(3);
  if (iVar1 == 0) {
    FUN_007596e0(0x17,0xffffffff);
    FUN_007596e0(0x2c,0xffffffff);
    FUN_007596e0(0x4c,0xffffffff);
    FUN_007596e0(0x42,0xffffffff);
    FUN_007596e0(0x4e,0xffffffff);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_007596e0(0x17,0xffffffff);
    FUN_007596e0(0x2c,0xffffffff);
    FUN_007596e0(0x42,0xffffffff);
    FUN_007596e0(0x4e,0xffffffff);
    FUN_007596e0(0x83,0xffffffff);
    FUN_007596e0(0x3e,0xffffffff);
    FUN_007596e0(0x3f,0xffffffff);
  }
  FUN_007596e0(0x4c,0xffffffff);
  FUN_007596e0(0x4d,0xffffffff);
  FUN_007596e0(0x4f,0xffffffff);
  FUN_007596e0(0x50,0xffffffff);
  FUN_007596e0(0x51,0xffffffff);
  FUN_007596e0(0x52,0xffffffff);
  return;
}

