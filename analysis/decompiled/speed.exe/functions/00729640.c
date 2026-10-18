/* speed.exe 00729640 FUN_00729640; analysis pseudocode, not buildable source.
 * calls 004fca70 thunk_FUN_006cf2b0
 * calls 00729120 FUN_00729120
 */

void __thiscall FUN_00729640(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  short *local_180;
  char *local_17c;
  int local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_150;
  char local_14f [63];
  int local_110 [67];
  
  local_110[0] = *(int *)(param_1 + 0x28);
  piVar4 = local_110 + 1;
  local_150 = 1;
  local_17c = local_14f;
  do {
    cVar3 = local_17c[-1];
    puVar2 = (undefined4 *)piVar4[-1];
    piVar4 = piVar4 + -1;
    local_17c = local_17c + -1;
    if (cVar3 == '\x01') {
      local_170 = *puVar2;
      local_16c = puVar2[1];
      local_168 = puVar2[2];
      local_160 = puVar2[3];
      local_15c = puVar2[4];
      local_158 = puVar2[5];
      cVar3 = thunk_FUN_006cf2b0(&local_170,&local_160,0);
    }
    if ((cVar3 != '\0') && (local_178 = 0, 0 < *(short *)(puVar2 + 6))) {
      local_180 = (short *)((int)puVar2 + 0x1a);
      do {
        sVar1 = *local_180;
        if (sVar1 < 0) {
          *piVar4 = *(int *)(param_1 + 0x28) + sVar1 * -0x24;
          piVar4 = piVar4 + 1;
          *local_17c = cVar3;
          local_17c = local_17c + 1;
        }
        else {
          FUN_00729120((int)sVar1,param_2,cVar3);
        }
        local_180 = local_180 + 1;
        local_178 = local_178 + 1;
      } while (local_178 < *(short *)(puVar2 + 6));
    }
  } while (piVar4 != local_110);
  return;
}

