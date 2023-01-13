#pragma once

#include <string>
#include <ostream>

namespace mulator
{

    enum class Mnemonic
    {
        ADC,
        ADD,
        ADR,
        AND,
        ASR,
        B,
        BIC,
        BKPT,
        BL,
        BLX,
        BX,
        CMN,
        CMP,
        CPS,
        DMB,
        DSB,
        EOR,
        ISB,
        LDM,
        LDR,
        LDRB,
        LDRH,
        LDRSB,
        LDRSH,
        LSL,
        LSR,
        MOV,
        MRS,
        MSR,
        MUL,
        MVN,
        NOP,
        ORR,
        POP,
        PUSH,
        REV,
        REV16,
        REVSH,
        ROR,
        RSB,
        SBC,
        SEV,
        STM,
        STR,
        STRB,
        STRH,
        SUB,
        SVC,
        SXTB,
        SXTH,
        TST,
        UDF,
        UXTB,
        UXTH,
        WFE,
        WFI,
        YIELD,

        // armv7m only
        ADDW,
        BFC,
        BFI,
        CBZ,
        CBNZ,
        CLREX,
        CLZ,
        CSDB,
        DBG,
        IT,
        LDMDB,
        LDRBT,
        LDRD,
        LDREX,
        LDREXB,
        LDREXH,
        LDRHT,
        LDRSBT,
        LDRSHT,
        LDRT,
        MLA,
        MLS,
        MOVT,
        MOVW,
        ORN,
        PLD,
        PLI,
        PSSBB,
        RBIT,
        RRX,
        SBFX,
        SDIV,
        SMLAL,
        SMULL,
        SSAT,
        SSBB,
        STMDB,
        STRBT,
        STRD,
        STREX,
        STREXB,
        STREXH,
        STRHT,
        STRT,
        SUBW,
        TBB,
        TBH,
        TEQ,
        UBFX,
        UDIV,
        UMLAL,
        UMULL,
        USAT,

        // armv7e-m only
        UADD8,
        SEL,
        USUB16,
        UADD16,
        PKHTB,
        PKHBT,
        SMULBB,
        SMULBT,
        SMULTB,
        SMULTT,
        SMLABB,
        SMLABT,
        SMLATB,
        SMLATT,
        QADD,
        QADD16,
        QADD8,
        QASX,
        QDADD,
        QDSUB,
        USUB8,
        UXTAB,
        UXTAB16,
        UXTAH,
        UXTB16,
        USAX,
        SSUB16,
        SSUB8,
        SXTAB,
        SXTAB16,
        SXTAH,
        UASX, 
        UHADD16,
        UHSUB8, //--
        QSAX,
        QSUB,
        SHADD16,
        SMLALD,
        SHADD8,
        SMLALDX,
        QSUB16,
        SHASX,
        SMLAD,
        SMLAWB,
        QSUB8,
        SHSAX,
        SMLADX,
        SMLAWT,
        SADD16,
        SHSUB16,
        SMLALBB,
        SMLSD,
        SADD8,
        SHSUB8,
        SMLALBT,
        SMLSDX,
        SMLSLD,
        SMLSLDX,
        SMMLA,
        SMMLAR,
        SMMLS,
        SMMLSR,
        SMMUL,
        SMMULR,
        SMUAD,
        SMUADX,
        SMULWB,
        SMULWT,
        SMUSD,
        SMUSDX,
        SSAT16,
        SSAX,
        UMAAL,
        UQADD16,
        UQADD8,
        UQASX,
        UQSAX,
        UQSUB16,
        UQSUB8,
        USAD8,
        USADA8,
        USAT16,
        SASX,
        SMLALTT,
        SMLALTB

    };

    std::string to_string(const Mnemonic& x);
    std::ostream& operator<<(std::ostream& os, const Mnemonic& x);

    bool has_narrow_encoding(const Mnemonic& x);
    bool has_wide_encoding(const Mnemonic& x);

}
