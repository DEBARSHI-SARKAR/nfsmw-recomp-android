/* speed.exe 007fb0f9 FUN_007fb0f9; analysis pseudocode, not buildable source.
 * calls 007fb750 FUN_007fb750
 * calls 007fae17 FUN_007fae17
 * calls 007fada4 FUN_007fada4
 * calls 007facf0 FUN_007facf0
 * calls 007fad4f FUN_007fad4f
 * calls 007fad2d FUN_007fad2d
 * calls 007fafb9 FUN_007fafb9
 * calls 007fb5b7 FUN_007fb5b7
 * calls 007fae8a FUN_007fae8a
 */

void FUN_007fb0f9(void)

{
  int iVar1;
  int iVar2;
  int in_stack_0000001c;
  uint local_8;
  
  iVar1 = in_stack_0000001c >> 1;
  if (DAT_009c123c != 0) {
    if ((DAT_009c0a30 & 0xc0000000) != 0) {
      if ((int)DAT_009c0a30 < 0) {
        local_8 = 0x3ff;
      }
      else {
        local_8 = DAT_009c0a30 >> 0x18;
      }
      FUN_007facf0();
      FUN_007fad2d();
      FUN_007fad2d();
      goto LAB_007fb183;
    }
    FUN_007facf0();
  }
  local_8 = 0;
LAB_007fb183:
  if ((local_8 & 1) == 0) {
    iVar2 = FUN_007fb750();
    if (iVar2 == 1) {
      FUN_007fad4f();
    }
    else {
      FUN_007fb5b7(&DAT_009bfe30,0x10);
    }
  }
  else {
    FUN_007fad2d();
    FUN_007fada4(in_stack_0000001c);
  }
  if ((local_8 & 2) == 0) {
    iVar2 = FUN_007fb750();
    if (iVar2 == 1) {
      FUN_007fad4f();
    }
    else {
      FUN_007fb5b7(&DAT_009bfe50,0x10);
    }
  }
  else {
    FUN_007fad2d();
    FUN_007fada4(in_stack_0000001c);
  }
  if ((local_8 & 4) == 0) {
    iVar2 = FUN_007fb750();
    if (iVar2 == 1) {
      FUN_007fad4f();
    }
    else {
      FUN_007fb5b7(&DAT_009c0030,0x10);
    }
  }
  else {
    FUN_007fad2d();
    FUN_007fada4(in_stack_0000001c);
  }
  if ((local_8 & 8) == 0) {
    iVar2 = FUN_007fb750();
    if (iVar2 == 1) {
      FUN_007fad4f();
    }
    else {
      FUN_007fb5b7(&DAT_009c0050,0x10);
    }
  }
  else {
    FUN_007fad2d();
    FUN_007fada4(in_stack_0000001c);
  }
  if ((local_8 & 0x10) == 0) {
    iVar2 = FUN_007fb750();
    if (iVar2 == 1) {
      FUN_007fad4f();
    }
    else {
      FUN_007fb5b7(&DAT_009c0330,8);
    }
  }
  else {
    FUN_007fad2d();
    FUN_007fae17(iVar1);
  }
  if ((local_8 & 0x20) == 0) {
    iVar2 = FUN_007fb750();
    if (iVar2 == 1) {
      FUN_007fad4f();
    }
    else {
      FUN_007fb5b7(&DAT_009c0430,8);
    }
  }
  else {
    FUN_007fad2d();
    FUN_007fae17(iVar1);
  }
  FUN_007fae8a(in_stack_0000001c);
  FUN_007fafb9(iVar1);
  FUN_007fafb9(iVar1);
  return;
}

