/* speed.exe 007f8751 FUN_007f8751; analysis pseudocode, not buildable source.
 * calls 007f85ac FUN_007f85ac
 */

void FUN_007f8751(uint *param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint *in_EAX;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = *param_1;
  if (local_8 != 0) {
    FUN_007f85ac(&local_8);
    uVar2 = local_8;
    uVar4 = 0;
    if (*in_EAX != 0) {
      do {
        local_8 = 0;
        if (param_4 != 0) {
          do {
            uVar1 = *(uint *)(param_3 + local_8 * 4);
            uVar3 = 0;
            if (uVar1 != 0) {
              do {
                if ((*in_EAX <= uVar4 + uVar3) ||
                   (*(char *)(uVar3 + *(int *)(param_2 + local_8 * 4)) !=
                    *(char *)(uVar4 + uVar3 + uVar2))) break;
                uVar3 = uVar3 + 1;
              } while (uVar3 < uVar1);
            }
            if (uVar3 == uVar1) {
              *param_1 = uVar4 + uVar3 + uVar2;
              *in_EAX = *in_EAX - (uVar4 + uVar3);
              *param_5 = local_8;
              return;
            }
            local_8 = local_8 + 1;
          } while (local_8 < param_4);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *in_EAX);
    }
  }
  *param_1 = 0;
  *in_EAX = 0;
  *param_5 = 0xffffffff;
  return;
}

