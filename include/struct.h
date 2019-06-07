#ifndef STRUCT_H_
#define STRUCT_H_

#include <stddef.h>

typedef struct {
    char *emo;
    char *str;
} emo_t;

const emo_t EMO_CMD[] = {
    {":smile:", "😁 "},
    {":smile1:", "😁 "},
    {":smile2:", "😄 "},
    {":smile3:", "😀 "},
    {":smile4:", "😃 "},
    {":smile5:", "😅 "},
    {":smile6:", "😊 "},
    {":smile7:", "🙂 "},
    {":smile8:", "😬 "},
    {":laugh:", "😂 "},
    {":laugh1:", "😂 "},
    {":laugh2:", "🤣 "},
    {":laugh3:", "😆 "},
    {":laugh4:", "😝 "},
    {":wink:", "😉 "},
    {":wink1:", "😉 "},
    {":wink2:", "😜 "},
    {":love:", "😘 "},
    {":love1:", "😘 "},
    {":love2:", "😍 "},
    {":sad:", "🙁 "},
    {":sad1:", "🙁 "},
    {":sad2:", "😟 "},
    {":sad3:", "😞 "},
    {":sad4:", "🥺 "},
    {":cry:", "😭 "},
    {":cry1:", "😭 "},
    {":cry2:", "😢 "},
    {":sick:", "🤒 "},
    {":sick1:", "🤒 "},
    {":sick2:", "🤧 "},
    {":sick3:", "🤢 "},
    {":sick4:", "🤮 "},
    {":sick5:", "😖 "},
    {":sick6", "😷 "},
    {":drunk:", "🥴 "},
    {":drunk1:", "🥴 "},
    {":lie:", "🤥 "},
    {":lie1:", "🤥 "},
    {":evil:", "😈 "},
    {":evil1:", "😈 "},
    {":evil2:", "👿 "},
    {":angel:", "😇 "},
    {":angel1:", "😇 "},
    {":mindblow:", "🤯 "},
    {":mindblow1:", "🤯 "},
    {":angry:", "😡 "},
    {":angry1:", "😡 "},
    {":angry2:", "😠 "},
    {":angry3:", "🤬 "},
    {":poop:", "💩 "},
    {":poop1:", "💩 "},
    {":santa:", "🎅 "},
    {":santa1:", "🎅 "},
    {":dab_m:", "🙅‍♂️ "},
    {":dab_wm:" ,"🙅‍♀️ "},
    {":thumbs_up:", "👍 "},
    {":thumbs_down:", "👎 "},
    {":ok_hand:", "👌 "},
    {":vulcan:", "🖖 "},
    {":mid_finger:", "🖕 "},
    {":grad_cap:", "🎓 "},
    {":dog:", "🐶 "},
    {":monkey:", "🐒 "},
    {":chick:", "🐥 "},
    {":pinguin:", "🐧 "},
    {":owl:", "🦉"},
    {":octopus:", "🐙 "},
    {":whale:", "🐳 "},
    {":fire:", "🔥 "},
    {":smoke:", "💨 "},
    {":beer:", "🍺 "},
    {":beer1:", "🍺 "},
    {":beer2:", "🍻 "},
    {":champ:", "🍾 "},
    {":spoon:", "🥄 "},
    {":rocket:", "🚀 "},
    {":disk:", "💿 "},
    {":mov_cam:", "🎥 "},
    {":hourglass:", "⏳ "},
    {":hourglass1:", "⏳ "},
    {":hourglass2:", "⌛️ "},
    {":light_bulb:", "💡 "},
    {":candle:", "🕯 "},
    {":trash:", "🗑 "},
    {":tools:", "🛠 "},
    {":key:", "🗝 "},
    {":key1:", "🗝 "},
    {":key2:", "🔑 "},
    {":balloon:", "🎈 "},
    {":party_popper:", "🎉 "},
    {":confetti:", "🎊 "},
    {":locked:", "🔒 "},
    {":unlocked:", "🔓 "},
    {":magnifying_glass:", "🔎 "},
    {":magnifying_glass1:", "🔎 "},
    {":magnifying_glass2:", "🔍 "},
    {":pen:", "🖋"},
    {":100:", "💯 "},
    {":question_mark:", "❓ "},
    {":exclamation_mark:", "❗️ "},
    {":zzz:", "💤 "},
    {":men:", "🚹 "},
    {":women:", "🚺 "},
    {":information:", "ℹ️ "},
    {":ok:", "🆗 "},
    {":blue:", "🔵 "},
    {":white:", "⚪️ "},
    {":red:", "🔴 "},
    {":black:", "⚫️ "},
    {":sound_on:", "🔊 "},
    {":sound_off:", "🔇 "},
    {":lgbt+:", "🏳️‍🌈 "},
    {":chequered:", "🏁 "},
    {":france:", "🇫🇷 "},
    {":lit:", "👌 🔥 💯 🔥 👌 "},
    {NULL, ""},
};

#endif