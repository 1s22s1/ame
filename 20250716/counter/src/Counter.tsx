import { Button, Stack } from "@mui/material";
import { useState } from "react";

function Counter({ countValue }: { countValue: number }) {
    const [count, setCount] = useState(0);

    const plus = () => {
        setCount(count + countValue);
    };

    const minus = () => {
        setCount(count - countValue);
    }

    return (
        <>
            <Stack direction={'row'} spacing={2}>
                <Button variant="outlined" onClick={plus}>+{countValue}</Button>
                <Button variant="outlined" onClick={minus}>-{countValue}</Button>
            </Stack>
            <p>Now, count is {count}.</p>
        </>
    )
}

export default Counter;
