/* speed.exe 005d7b70 FUN_005d7b70; analysis pseudocode, not buildable source.
 * calls 005d7830 FUN_005d7830
 * calls 005d60c0 FUN_005d60c0
 * calls 005cc090 FUN_005cc090
 */

void FUN_005d7b70(void)

{
  uint uVar1;
  undefined4 local_10;
  undefined1 *local_c;
  
  if (DAT_0091dd98 == '\0') {
    local_10 = FUN_005cc090(3);
    local_c = &LAB_005ccd60;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(3);
    local_c = &LAB_005ccd70;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(3);
    local_c = &LAB_005ccd80;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(4);
    local_c = &LAB_005ccda0;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(4);
    local_c = &LAB_005ccdc0;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(4);
    local_c = &LAB_005ccde0;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(5);
    local_c = &LAB_005cce00;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(4);
    local_c = &LAB_005cce20;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(4);
    local_c = &LAB_005cce40;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(4);
    local_c = &LAB_005cce60;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(3);
    local_c = &LAB_005cce80;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(3);
    local_c = &LAB_005cceb0;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(5);
    local_c = &LAB_005cced0;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(3);
    local_c = &LAB_005ccef0;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(3);
    local_c = &LAB_005ccf10;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(4);
    local_c = &LAB_005ccf30;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(4);
    local_c = &LAB_005ccf40;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(3);
    local_c = &LAB_005ccf60;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(5);
    local_c = &LAB_005ccf70;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(5);
    local_c = &LAB_005ccf90;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(5);
    local_c = &LAB_005ccfd0;
    FUN_005d7830(&local_10);
    local_10 = FUN_005cc090(7);
    local_c = &LAB_005ccff0;
    FUN_005d7830(&local_10);
    uVar1 = 0;
    do {
      FUN_005d60c0(*(int *)((int)&DAT_0091ddec + uVar1),*(int *)((int)&DAT_0091ddf0 + uVar1),
                   *(int *)((int)&DAT_0091ddf0 + uVar1) - *(int *)((int)&DAT_0091ddec + uVar1) >> 3)
      ;
      uVar1 = uVar1 + 0x10;
    } while (uVar1 < 0x50);
    DAT_0091dd98 = '\x01';
  }
  return;
}

