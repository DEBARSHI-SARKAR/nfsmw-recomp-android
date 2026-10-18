/* speed.exe 005d79b0 FUN_005d79b0; analysis pseudocode, not buildable source.
 * calls 005d7260 FUN_005d7260
 * calls 005d77c0 FUN_005d77c0
 * calls 005d5ff0 FUN_005d5ff0
 */

void FUN_005d79b0(void)

{
  undefined4 local_8;
  code *local_4;
  
  if (DAT_0091dd89 == '\0') {
    FUN_005d7260(0x10);
    local_8 = 0x63692020;
    local_4 = FUN_005d31c0;
    FUN_005d77c0(&local_8);
    local_8 = 0x65452020;
    local_4 = (code *)&LAB_005d2f40;
    FUN_005d77c0(&local_8);
    local_8 = 0x65532020;
    local_4 = (code *)&LAB_005d2ff0;
    FUN_005d77c0(&local_8);
    local_8 = 0x65542020;
    local_4 = (code *)&LAB_005d3080;
    FUN_005d77c0(&local_8);
    local_8 = 0x65412020;
    local_4 = (code *)&LAB_005d3130;
    FUN_005d77c0(&local_8);
    local_8 = 0x73662020;
    local_4 = (code *)&LAB_005cbc40;
    FUN_005d77c0(&local_8);
    local_8 = 0x656c2020;
    local_4 = (code *)&LAB_005cbbf0;
    FUN_005d77c0(&local_8);
    FUN_005d5ff0(DAT_0091ddc4,DAT_0091ddc8,DAT_0091ddc8 - DAT_0091ddc4 >> 3);
    DAT_0091dd89 = '\x01';
    DAT_0091dd88 = 1;
  }
  return;
}

