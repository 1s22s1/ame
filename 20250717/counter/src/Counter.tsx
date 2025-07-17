import { Button, Stack } from "@mui/material"
import { useState } from "react"

function Counter({ unit }: { unit: number }) {
    const [count, setCoount] = useState(0);

    const plus = () => {
        setCoount(count + unit);
    }

    const minus = () => {
        setCoount(count - unit);
    }

    return (
        <>
            <Stack direction={'row'} spacing={2}>
                <Button variant="outlined" onClick={plus}>+</Button>
                <Button variant="outlined" onClick={minus}>-</Button>
            </Stack>

            <p>Now, count is {count}</p>
        </>
    )
}

export default Counter
